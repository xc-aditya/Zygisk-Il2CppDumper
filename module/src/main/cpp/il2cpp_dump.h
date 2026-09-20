//
// Created by Perfare on 2020/7/4.
//

#ifndef ZYGISK_IL2CPPDUMPER_IL2CPP_DUMP_H
#define ZYGISK_IL2CPPDUMPER_IL2CPP_DUMP_H

void il2cpp_api_init(void *handle);

void il2cpp_dump(const char *outDir);

// Dumps the decrypted libil2cpp.so pages from process memory.
// Output: <outDir>/files/libil2cpp_dumped.so  (memory-layout ELF,
// load into Il2CppDumper with the "is a dump" option).
void dump_libil2cpp_so(const char *outDir);

// Scans heap/anon mappings for the global-metadata magic (0xFAB11BAF)
// and writes the decrypted blob to <outDir>/files/global-metadata.dat.
void dump_global_metadata(const char *outDir);

#endif //ZYGISK_IL2CPPDUMPER_IL2CPP_DUMP_H
