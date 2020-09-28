/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class NSString;

@interface SBWindowHideRequest : NSObject {

	NSString* _reason;
	SBWindowLevelRange_struct _windowLevelRange;

}

@property (assign) SBWindowLevelRange_struct windowLevelRange;              //@synthesize windowLevelRange=_windowLevelRange - In the implementation block
@property (copy) NSString * reason;                                         //@synthesize reason=_reason - In the implementation block
+(id)hideRequestWithWindowLevelRange:(SBWindowLevelRange_struct)arg1 reason:(id)arg2 ;
-(void)setReason:(NSString *)arg1 ;
-(NSString *)reason;
-(id)description;
-(void)setWindowLevelRange:(SBWindowLevelRange_struct)arg1 ;
-(SBWindowLevelRange_struct)windowLevelRange;
@end
