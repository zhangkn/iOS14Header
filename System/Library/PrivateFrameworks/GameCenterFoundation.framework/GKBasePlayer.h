/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface GKBasePlayer : NSObject

@property (nonatomic,retain,readonly) NSString * playerID; 
@property (nonatomic,readonly) NSString * displayName; 
+(BOOL)supportsSecureCoding;
-(NSString *)displayName;
-(NSString *)playerID;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
