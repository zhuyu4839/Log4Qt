/******************************************************************************
 *
 * This file is part of Log4Qt library.
 *
 * Copyright (C) 2007 - 2020 Log4Qt contributors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 ******************************************************************************/

#ifndef LOG4QT_BINARYCLASSLOGGER_H
#define LOG4QT_BINARYCLASSLOGGER_H

#include "../log4qtshared.h"

#include <QAtomicPointer>

class QObject;
namespace Log4Qt
{

class Logger;
class BinaryLogger;

class LOG4QT_EXPORT BinaryClassLogger
{
public:
    BinaryClassLogger();
    BinaryLogger *logger(const QObject *object);

private:
    mutable QAtomicPointer<BinaryLogger> mLogger;
};

} // namespace Log4Qt

#endif // LOG4QT_BINARYCLASSLOGGER_H
