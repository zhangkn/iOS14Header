/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNFuture;

@interface CNUICoreContactTypeAssessor : NSObject {

	CNFuture* _familyInfoFuture;

}

@property (nonatomic,readonly) CNFuture * familyInfoFuture;              //@synthesize familyInfoFuture=_familyInfoFuture - In the implementation block
+(id)keysToFetch;
-(id)init;
-(id)initWithFamilyInfoFuture:(id)arg1 ;
-(long long)estiamtedTypeOfContact:(id)arg1 ;
-(id)initWithFamilyInfo:(id)arg1 ;
-(CNFuture *)familyInfoFuture;
@end
