/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IOGPU.framework/IOGPU
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IOGPUMetalDeviceShmemPool, IOGPUMetalDeviceShmem, IOGPUMetalDevice, IOGPUMetalPooledResource, IOGPUMetalResourcePool, IOGPUMetalDevice<MTLDevice>, NSString, IOGPUMetalHeap, IOGPUMetalResource;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct __CFArray* CFArrayRef;

typedef struct __IOGPUCommandQueue* IOGPUCommandQueueRef;

typedef struct __IOGPUDevice* IOGPUDeviceRef;

typedef struct {
	IOGPUMetalDeviceShmemPool* segmentListShmemPool;
	IOGPUMetalDeviceShmemPool* kernelCommandShmemPool;
	id hwResourcePools;
	unsigned hwResourcePoolCount;
	id akResourceListPool;
	 MTLResourceListPool;
	id akPrivateResourceListPool;
	 MTLResourceListPool;
	IOGPUMetalDeviceShmemPool* debugBufferShmemPool;
} SCD_Struct_IO4;

typedef struct IOGPUMetalSuballocator* IOGPUMetalSuballocatorRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct {
	IOGPUMetalDeviceShmem* tqe_next;
	id tqe_prev;
} SCD_Struct_IO7;

typedef struct IOGPUMetalDeviceShmemPrivate {
	IOGPUMetalDeviceShmemPool* pool;
	SCD_Struct_IO7 entry;
	unsigned long long time_added;
} IOGPUMetalDeviceShmemPrivate;

typedef struct shmemPoolQueue {
	IOGPUMetalDeviceShmem* tqh_first;
	id tqh_last;
} shmemPoolQueue;

typedef struct IOGPUMetalDeviceShmemPoolPrivate {
	shmemPoolQueue queue;
	os_unfair_lock_s lock;
	int count;
	Class shmemClass;
	IOGPUMetalDevice* device;
	unsigned shmemSize;
	int shmemType;
} IOGPUMetalDeviceShmemPoolPrivate;

typedef struct MTLRangeAllocator {
	MTLRangeAllocatorElement elements;
	unsigned numElements;
	unsigned long long capacity;
	unsigned long long capacityIncrement;
	unsigned long long defaultAlignmentMask;
} MTLRangeAllocator;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct MTLIndirectCommandBufferHeader {
	unsigned long long headerSize;
	unsigned commandTypes;
	BOOL inheritPipelineState;
	BOOL inheritBuffers;
	unsigned char maxVertexBufferBindCount;
	unsigned char maxFragmentBufferBindCount;
	unsigned char maxKernelBufferBindCount;
	unsigned long long size;
} MTLIndirectCommandBufferHeader;

typedef struct {
	IOGPUMetalPooledResource* tqe_next;
	id tqe_prev;
} SCD_Struct_IO14;

typedef struct IOGPUMetalResourcePrivate {
	IOGPUMetalResourcePool* pool;
	SCD_Struct_IO14 entry;
	unsigned long long time_added;
	unsigned pool_generation;
} IOGPUMetalResourcePrivate;

typedef struct {
	unsigned field1;
	unsigned field2;
} SCD_Struct_IO16;

typedef struct IOGPUResourceInfo {
	__IOSurface iosurface;
	unsigned resourceSize : 56;
	unsigned iosurfaceField : 8;
	unsigned resourceID;
} IOGPUResourceInfo;

typedef struct IOGPUMetalResource {
	/*function pointer*/void* vendor;
	unsigned long long reserved[4];
	IOGPUResourceInfo info;
	unsigned long long sharedAllocationUniqueId;
	unsigned long long cachedAllocationUniqueId;
	unsigned long long gpuAddress;
	IOGPUMetalDevice<MTLDevice>* device;
	NSString* label;
	unsigned long long globalTraceObjectID;
	unsigned long long labelTraceID;
	__IOGPUResource resourceRef;
	IOGPUClientSharedRO clientSharedRO;
	void virtualAddress;
	unsigned long long options;
	unsigned long long storageMode;
	unsigned long long cpuCacheMode;
	int responsibleProcess;
	unsigned long long purgeableState;
	BOOL purgeableAllowed;
	IOGPUMetalHeap* heap;
	IOGPUMetalResource* resource;
	unsigned long long offset;
	unsigned long long length;
	BOOL pinned;
	os_unfair_lock_s labelLock;
} IOGPUMetalResource;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct __CFString* CFStringRef;

typedef struct IOGPUMetalResourceQueue {
	IOGPUMetalPooledResource* tqh_first;
	id tqh_last;
} IOGPUMetalResourceQueue;

typedef struct IOGPUMetalResourcePoolPrivate {
	IOGPUMetalResourceQueue volatileQueue;
	IOGPUMetalResourceQueue nonvolatileQueue;
	os_unfair_lock_s lock;
	int count;
} IOGPUMetalResourcePoolPrivate;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	unsigned long long field3;
} SCD_Struct_IO23;

typedef struct {
	SCD_Struct_IO23 field1;
	SCD_Struct_IO23 field2;
} SCD_Struct_IO24;

typedef struct {
	unsigned char field1;
	unsigned char field2;
	unsigned char field3;
	unsigned char field4;
} SCD_Struct_IO25;
