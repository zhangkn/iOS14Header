/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelKind.h>

@class NSDictionary;

@interface MPModelGenericObjectKind : MPModelKind {

	NSDictionary* _relationshipKinds;

}

@property (nonatomic,readonly) NSDictionary * relationshipKinds;              //@synthesize relationshipKinds=_relationshipKinds - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)kindWithRelationshipKinds:(id)arg1 ;
+(id)identityKind;
-(id)humanDescription;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)relationshipKinds;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
@end

