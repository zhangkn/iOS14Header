/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSCloudKitMirroringDelegateProgressProvider;
@class NSString, NSObject;

@interface NSPersistentCloudKitContainerOptions : NSObject {

	BOOL _useDeviceToDeviceEncryption;
	NSString* _containerIdentifier;
	NSString* _apsConnectionMachServiceName;
	long long _databaseScope;
	NSObject*<NSCloudKitMirroringDelegateProgressProvider> _progressProvider;

}

@property (assign) BOOL useEncryptedStorage; 
@property (assign) BOOL useDeviceToDeviceEncryption;                                                                      //@synthesize useDeviceToDeviceEncryption=_useDeviceToDeviceEncryption - In the implementation block
@property (nonatomic,retain) NSString * apsConnectionMachServiceName;                                                     //@synthesize apsConnectionMachServiceName=_apsConnectionMachServiceName - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<NSCloudKitMirroringDelegateProgressProvider> progressProvider;              //@synthesize progressProvider=_progressProvider - In the implementation block
@property (copy,readonly) NSString * containerIdentifier;                                                                 //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (assign,nonatomic) long long databaseScope;                                                                     //@synthesize databaseScope=_databaseScope - In the implementation block
-(NSString *)containerIdentifier;
-(void)setUseEncryptedStorage:(BOOL)arg1 ;
-(void)dealloc;
-(void)setProgressProvider:(NSObject*<NSCloudKitMirroringDelegateProgressProvider>)arg1 ;
-(BOOL)useEncryptedStorage;
-(NSString *)apsConnectionMachServiceName;
-(void)setApsConnectionMachServiceName:(NSString *)arg1 ;
-(NSObject*<NSCloudKitMirroringDelegateProgressProvider>)progressProvider;
-(id)initWithContainerIdentifier:(id)arg1 ;
-(void)setDatabaseScope:(long long)arg1 ;
-(long long)databaseScope;
-(void)setUseDeviceToDeviceEncryption:(BOOL)arg1 ;
-(BOOL)useDeviceToDeviceEncryption;
@end

