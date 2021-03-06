//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PhotoLibraryPTPDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, PFMediaCapabilities, PTPDeviceInfoDataset, PTPSecurityModel, PTPStorage;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PTPVirtualCamera : NSObject <PhotoLibraryPTPDelegate>
{
    NSString *_name;	// 8 = 0x8
    NSString *_userAssignedName;	// 16 = 0x10
    int _nameChangeToken;	// 24 = 0x18
    NSString *_path;	// 32 = 0x20
    PTPDeviceInfoDataset *_deviceInfoDataset;	// 40 = 0x28
    NSMutableDictionary *_storages;	// 48 = 0x30
    int _lastError;	// 56 = 0x38
    unsigned char _eventData[24];	// 60 = 0x3c
    id _delegate;	// 88 = 0x58
    struct __CFNotificationCenter *_notificationCenter;	// 96 = 0x60
    _Bool _notificationObserversInstalled;	// 104 = 0x68
    NSString *_productType;	// 112 = 0x70
    NSMutableArray *_objectDescriptionDataset;	// 120 = 0x78
    PTPSecurityModel *_ptpSecurityModel;	// 128 = 0x80
    PTPStorage *_photoStorage;	// 136 = 0x88
    PTPStorage *_placeholderStorage;	// 144 = 0x90
    NSObject<OS_dispatch_queue> *_storageEnumerationQ;	// 152 = 0x98
    NSObject<OS_dispatch_queue> *_storageTimerQ;	// 160 = 0xa0
    NSObject<OS_dispatch_source> *_storageTimer;	// 168 = 0xa8
    unsigned int _currentInternalSessionID;	// 176 = 0xb0
    PFMediaCapabilities *_mediaCapabilities;	// 184 = 0xb8
}

@property unsigned int currentInternalSessionID; // @synthesize currentInternalSessionID=_currentInternalSessionID;
@property(retain) PTPSecurityModel *ptpSecurityModel; // @synthesize ptpSecurityModel=_ptpSecurityModel;
- (id)objectPropListForHandle:(unsigned int)arg1 withObjectFormatCode:(unsigned int)arg2 andPropertyCode:(unsigned int)arg3 andPropertyGroup:(unsigned int)arg4 andDepth:(unsigned int)arg5 responseCode:(unsigned short *)arg6;	// IMP=0x0000000100015360
- (id)objectPropDescForObjectPropertyCode:(unsigned short)arg1 responseCode:(unsigned short *)arg2;	// IMP=0x0000000100015208
- (id)objectPropValueForHandle:(unsigned int)arg1 withObjectPropertyCode:(unsigned short)arg2 responseCode:(unsigned short *)arg3;	// IMP=0x0000000100014b28
- (id)objectPropertiesSupportedForObjectFormatCode:(unsigned short)arg1 responseCode:(unsigned short *)arg2;	// IMP=0x00000001000149b4
- (void)libraryDidBecomeUnavailable;	// IMP=0x00000001000149a8
- (void)libraryDidBecomeAvailable;	// IMP=0x000000010001499c
- (void)addedPhotoKeys:(id)arg1 deletedPhotoKeys:(id)arg2 changedPhotoKeys:(id)arg3 changePendingPhotoKeys:(id)arg4;	// IMP=0x00000001000147b4
- (void)processDeletedFiles:(id)arg1;	// IMP=0x00000001000140a8
- (id)enumerateAssetsFlatWithParent:(id)arg1 andAssetArray:(id)arg2;	// IMP=0x000000010001386c
- (id)enumerateAssetsWithParent:(id)arg1 andAssetArray:(id)arg2;	// IMP=0x0000000100013860
- (void)processAddedFiles:(id)arg1;	// IMP=0x0000000100013518
- (void)generatePTPEventsForDeletedObjectHandles:(id)arg1;	// IMP=0x0000000100013480
- (void)generatePTPEventsForAddedObjectHandles:(id)arg1;	// IMP=0x00000001000133e8
- (void)deleteObjectWithObjectHandle:(unsigned int)arg1 responseCode:(unsigned short *)arg2;	// IMP=0x000000010001306c
- (id)aptpMetadataForObjectHandle:(unsigned int)arg1 withParams:(id)arg2 responseCode:(unsigned short *)arg3;	// IMP=0x0000000100012680
- (id)thumbnailForObjectHandle:(unsigned int)arg1 width:(unsigned int)arg2 responseCode:(unsigned short *)arg3;	// IMP=0x000000010001253c
- (id)embeddedMetadataForObjectHandle:(unsigned int)arg1 responseCode:(unsigned short *)arg2;	// IMP=0x00000001000120b0
- (id)dataSourceForObjectHandle:(unsigned int)arg1 responseCode:(unsigned short *)arg2 size:(unsigned int *)arg3;	// IMP=0x0000000100011ff0
- (unsigned int)orientationForObjectHandle:(unsigned int)arg1;	// IMP=0x0000000100011f70
- (id)objectInfoDatasetForObjectHandle:(unsigned int)arg1;	// IMP=0x0000000100011f24
- (id)storageInfoDatasetForStorageID:(unsigned int)arg1;	// IMP=0x0000000100011ed8
- (id)devicePropValueForProperty:(unsigned short)arg1;	// IMP=0x0000000100011e04
- (id)devicePropDescDatasetForProperty:(unsigned short)arg1;	// IMP=0x0000000100011b64
- (_Bool)hostIsLegacyOS;	// IMP=0x0000000100011af4
- (_Bool)hostIsMacOS;	// IMP=0x0000000100011a84
- (_Bool)hostIsWindows;	// IMP=0x0000000100011a14
- (id)deviceInfoDataset;	// IMP=0x0000000100011a0c
- (unsigned int)numAllObjects;	// IMP=0x00000001000119ec
- (unsigned int)numDownloadableObjects;	// IMP=0x00000001000119b4
- (id)objectInfoForObjectsInStorage:(unsigned int)arg1 forObjectFormatCode:(unsigned short)arg2 inAssociation:(unsigned int)arg3 withContentType:(int)arg4 responseCode:(unsigned short *)arg5;	// IMP=0x00000001000118ac
- (id)objectHandlesInStorage:(unsigned int)arg1 forObjectFormatCode:(unsigned short)arg2 inAssociation:(unsigned int)arg3 responseCode:(unsigned short *)arg4;	// IMP=0x0000000100011744
- (id)allStorageIDs;	// IMP=0x0000000100011734
- (id)allStorages;	// IMP=0x00000001000115e4
- (int)nameChangeToken;	// IMP=0x00000001000115dc
- (void)setNameChangeToken:(int)arg1;	// IMP=0x00000001000115d4
- (id)objectForObjectHandle:(id)arg1;	// IMP=0x0000000100011538
- (id)storageWithID:(unsigned int)arg1;	// IMP=0x0000000100011408
- (void)stopObservers;	// IMP=0x00000001000111b0
- (void)provokeSecurityCheck;	// IMP=0x0000000100011044
- (void)startObservers;	// IMP=0x0000000100010cdc
- (void)cleanupStorageAfterTimeout:(double)arg1 cleanup:(CDUnknownBlockType)arg2;	// IMP=0x0000000100010738
- (void)closeSession;	// IMP=0x000000010001063c
- (void)setupStorageAfterTimeout:(CDUnknownBlockType)arg1;	// IMP=0x00000001000104a0
- (void)openSession;	// IMP=0x00000001000101e0
- (void)removeSecurity;	// IMP=0x0000000100010050
- (void)installSecurity;	// IMP=0x000000010000fff0
- (void)assignHostMediaCapabilities:(id)arg1;	// IMP=0x000000010000fdc4
- (void)sendEventDeviceUnlocked;	// IMP=0x000000010000fd8c
- (void)removeStorages;	// IMP=0x000000010000fb0c
- (void)sendEventRemoveStorageWithID:(unsigned int)arg1;	// IMP=0x000000010000f954
- (_Bool)removeStorageWithID:(unsigned int)arg1;	// IMP=0x000000010000f680
- (void)sendEventAddStorageWithID:(unsigned int)arg1;	// IMP=0x000000010000f4d8
- (void)addStorage:(id)arg1;	// IMP=0x000000010000f010
- (_Bool)visibleStorage:(id)arg1;	// IMP=0x000000010000efa0
- (id)photoStorageAvailable;	// IMP=0x000000010000ef80
- (void)handleInternalSettingsChanged;	// IMP=0x000000010000eef0
- (void)resetPhotoStorage;	// IMP=0x000000010000ec48
- (void)preparePhotoStorage;	// IMP=0x000000010000e5ac
- (void)removePlaceholderStorage;	// IMP=0x000000010000e52c
- (void)vendPhotoStorage;	// IMP=0x000000010000e308
- (void)initializeMTPProperties;	// IMP=0x000000010000e14c
- (long long)transferBehaviorUserPreference;	// IMP=0x000000010000df54
- (void)updateUserAssignedName;	// IMP=0x000000010000deec
- (id)userAssignedName;	// IMP=0x000000010000dc8c
- (id)name;	// IMP=0x000000010000dc84
- (id)path;	// IMP=0x000000010000dc7c
- (void)setDelegate:(id)arg1;	// IMP=0x000000010000db10
- (void)dealloc;	// IMP=0x000000010000d9c8
- (id)initWithName:(id)arg1 andPath:(id)arg2;	// IMP=0x000000010000d3c8

@end

