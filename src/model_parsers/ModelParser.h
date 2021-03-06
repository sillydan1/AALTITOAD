/**
 * Copyright (C) 2020 Asger Gitz-Johansen

   This file is part of aaltitoad.

    aaltitoad is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    aaltitoad is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with aaltitoad.  If not, see <https://www.gnu.org/licenses/>.
 */
#ifndef MAVE_MODELPARSER_H
#define MAVE_MODELPARSER_H
#include <aaltitoadpch.h>

template<typename ModelType, typename IntermediateRep>
class ModelParser {
public:
    virtual ModelType ParseFromFilePath(const std::string& filepath) {
        return ConvertToModelType(ParseToIntermediateRep(filepath));
    }
protected:
    virtual ModelType ConvertToModelType(const IntermediateRep& intermediateRep) = 0;
    virtual IntermediateRep ParseToIntermediateRep(const std::string& filepath) = 0;
};

#endif //MAVE_MODELPARSER_H
