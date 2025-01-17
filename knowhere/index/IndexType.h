// Copyright (C) 2019-2020 Zilliz. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance
// with the License. You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software distributed under the License
// is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express
// or implied. See the License for the specific language governing permissions and limitations under the License

#pragma once

#include <string>

namespace knowhere {

using IndexType = std::string;

namespace IndexEnum {

extern const char* INVALID;

extern const char* INDEX_FAISS_BIN_IDMAP;
extern const char* INDEX_FAISS_BIN_IVFFLAT;

extern const char* INDEX_FAISS_IDMAP;
extern const char* INDEX_FAISS_IVFFLAT;
extern const char* INDEX_FAISS_IVFPQ;
extern const char* INDEX_FAISS_IVFSQ8;
extern const char* INDEX_FAISS_IVFSQ8H;
extern const char* INDEX_FAISS_IVFHNSW;

extern const char* INDEX_ANNOY;
extern const char* INDEX_HNSW;
extern const char* INDEX_RHNSWFlat;
extern const char* INDEX_RHNSWPQ;
extern const char* INDEX_RHNSWSQ;

#ifdef KNOWHERE_SUPPORT_NGT
extern const char* INDEX_NGTPANNG;
extern const char* INDEX_NGTONNG;
#endif
#ifdef KNOWHERE_SUPPORT_NSG
extern const char* INDEX_NSG;
#endif
#ifdef KNOWHERE_SUPPORT_SPTAG
extern const char* INDEX_SPTAG_KDT_RNT;
extern const char* INDEX_SPTAG_BKT_RNT;
#endif
}  // namespace IndexEnum

enum class IndexMode { MODE_CPU = 0, MODE_GPU = 1 };

}  // namespace knowhere
