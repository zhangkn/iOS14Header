/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:58 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PXRecipientTransport : NSObject <NSCopying> {

	NSString* _address;
	long long _addressKind;

}

@property (nonatomic,copy,readonly) NSString * address;              //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) long long addressKind;                //@synthesize addressKind=_addressKind - In the implementation block
+(id)new;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithAddress:(id)arg1 addressKind:(long long)arg2 ;
-(long long)addressKind;
-(NSString *)address;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end
