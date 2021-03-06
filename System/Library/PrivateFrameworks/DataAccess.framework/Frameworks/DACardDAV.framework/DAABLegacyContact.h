/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DACardDAV/DAContact.h>

@class NSString;

@interface DAABLegacyContact : NSObject <DAContact> {

	void* _person;

}

@property (nonatomic,readonly) void* person;                        //@synthesize person=_person - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void*)person;
-(BOOL)isContact;
-(void)setExternalIdentifier:(id)arg1 ;
-(void)markForDeletion;
-(BOOL)isGroup;
-(id)externalIdentifier;
-(void)dealloc;
-(id)eTag;
-(void)updateSaveRequest:(id)arg1 ;
-(BOOL)isContainer;
-(BOOL)isAccount;
-(id)externalUUID;
-(void)setExternalUUID:(id)arg1 ;
-(void)setETag:(id)arg1 ;
-(int)legacyIdentifier;
-(void*)asPerson;
-(id)asContact;
-(id)initWithABPerson:(void*)arg1 ;
@end

