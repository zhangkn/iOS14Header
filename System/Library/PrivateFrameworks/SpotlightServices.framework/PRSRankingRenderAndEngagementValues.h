/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpotlightServices/SpotlightServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PRSRankingRenderAndEngagementValues : NSObject <NSSecureCoding, NSCopying> {

	short _renderValues[6];
	short _engagementValues[6];

}
+(BOOL)supportsSecureCoding;
-(void)setRankingValues:(short)arg1 forType:(int)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)incrementRankingValuesForType:(int)arg1 ;
-(BOOL)getRankingValues:(short*)arg1 withRankingValueSize:(unsigned long long)arg2 forType:(int)arg3 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

