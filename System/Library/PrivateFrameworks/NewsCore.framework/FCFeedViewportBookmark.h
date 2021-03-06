/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FCFeedViewportBookmark : NSObject <NSCopying, NSSecureCoding> {

	NSString* _externalGroupID;
	NSString* _internalGroupID;
	NSString* _articleID;

}

@property (nonatomic,copy,readonly) NSString * externalGroupID;              //@synthesize externalGroupID=_externalGroupID - In the implementation block
@property (nonatomic,copy,readonly) NSString * internalGroupID;              //@synthesize internalGroupID=_internalGroupID - In the implementation block
@property (nonatomic,copy,readonly) NSString * articleID;                    //@synthesize articleID=_articleID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)internalGroupID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)articleID;
-(NSString *)externalGroupID;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithExternalGroupID:(id)arg1 internalGroupID:(id)arg2 articleID:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
@end

