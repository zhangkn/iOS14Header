/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSNumber, NSDictionary;

@interface EDAMPreferences : FATObject {

	NSNumber* _updateSequenceNum;
	NSDictionary* _preferences;

}

@property (nonatomic,retain) NSNumber * updateSequenceNum;              //@synthesize updateSequenceNum=_updateSequenceNum - In the implementation block
@property (nonatomic,retain) NSDictionary * preferences;                //@synthesize preferences=_preferences - In the implementation block
+(id)structName;
+(id)structFields;
-(NSDictionary *)preferences;
-(void)setPreferences:(NSDictionary *)arg1 ;
-(NSNumber *)updateSequenceNum;
-(void)setUpdateSequenceNum:(NSNumber *)arg1 ;
@end
