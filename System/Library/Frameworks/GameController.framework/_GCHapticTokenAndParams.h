/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameController/GameController-Structs.h>
@class NSMutableArray;

@interface _GCHapticTokenAndParams : NSObject {

	NSMutableArray* _params;
	unsigned long long _token;

}

@property (nonatomic,retain) NSMutableArray * params;                 //@synthesize params=_params - In the implementation block
@property (nonatomic,readonly) unsigned long long token;              //@synthesize token=_token - In the implementation block
-(NSMutableArray *)params;
-(void)setParams:(NSMutableArray *)arg1 ;
-(unsigned long long)token;
-(id)initWithHapticCommand:(const HapticCommand*)arg1 ;
@end

