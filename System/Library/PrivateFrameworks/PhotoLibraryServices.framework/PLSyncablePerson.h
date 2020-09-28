/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol PLSyncablePerson <NSObject,PLSyncableObject>
@property (nonatomic,retain) NSString * personUUID; 
@property (nonatomic,retain) NSString * fullName; 
@property (nonatomic,readonly) BOOL userVerified; 
@property (nonatomic,readonly) BOOL graphVerified; 
@property (nonatomic,readonly) BOOL isTombstone; 
@property (nonatomic,readonly) BOOL keyFaceIsPicked; 
@required
-(id)pointerDescription;
-(void)setFullName:(id)arg1;
-(BOOL)isTombstone;
-(BOOL)userVerified;
-(void)setKeyFaceToPicked;
-(id)syncDescription;
-(BOOL)keyFaceIsPicked;
-(BOOL)graphVerified;
-(NSString *)fullName;
-(NSString *)personUUID;
-(void)setPersonUUID:(id)arg1;

@end
