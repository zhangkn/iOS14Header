/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BCCloudData.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol BCCloudDataPrivacyDelegate;
@class NSDate, CKRecord, NSString, NSData;

@interface BCMutableCloudData : NSObject <BCCloudData, NSSecureCoding> {

	BOOL _deletedFlag;
	long long _editGeneration;
	long long _syncGeneration;
	NSDate* _modificationDate;
	CKRecord* _systemFields;
	id<BCCloudDataPrivacyDelegate> _privacyDelegate;
	NSString* _localRecordID;

}

@property (assign,nonatomic) BOOL deletedFlag;                                                   //@synthesize deletedFlag=_deletedFlag - In the implementation block
@property (nonatomic,copy) NSDate * modificationDate;                                            //@synthesize modificationDate=_modificationDate - In the implementation block
@property (assign,nonatomic) long long editGeneration;                                           //@synthesize editGeneration=_editGeneration - In the implementation block
@property (assign,nonatomic) long long syncGeneration;                                           //@synthesize syncGeneration=_syncGeneration - In the implementation block
@property (nonatomic,copy) NSString * localRecordID;                                             //@synthesize localRecordID=_localRecordID - In the implementation block
@property (nonatomic,copy) CKRecord * systemFields;                                              //@synthesize systemFields=_systemFields - In the implementation block
@property (nonatomic,copy,readonly) NSData * ckSystemFields; 
@property (assign,nonatomic,__weak) id<BCCloudDataPrivacyDelegate> privacyDelegate;              //@synthesize privacyDelegate=_privacyDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setModificationDate:(NSDate *)arg1 ;
-(NSDate *)modificationDate;
-(id)identifier;
-(BOOL)deletedFlag;
-(void)setDeletedFlag:(BOOL)arg1 ;
-(id)initWithRecord:(id)arg1 ;
-(id<BCCloudDataPrivacyDelegate>)privacyDelegate;
-(void)setPrivacyDelegate:(id<BCCloudDataPrivacyDelegate>)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)zoneName;
-(void)encodeWithCoder:(id)arg1 ;
-(id)recordType;
-(unsigned long long)hash;
-(id)initWithCloudData:(id)arg1 ;
-(void)incrementEditGeneration;
-(long long)editGeneration;
-(long long)syncGeneration;
-(CKRecord *)systemFields;
-(NSData *)ckSystemFields;
-(id)configuredRecordFromAttributes;
-(NSString *)localRecordID;
-(void)setSystemFields:(CKRecord *)arg1 ;
-(void)setEditGeneration:(long long)arg1 ;
-(void)setSyncGeneration:(long long)arg1 ;
-(void)setLocalRecordID:(NSString *)arg1 ;
@end

