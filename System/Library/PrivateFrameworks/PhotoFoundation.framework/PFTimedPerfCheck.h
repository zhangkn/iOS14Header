/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoFoundation/PhotoFoundation-Structs.h>
@interface PFTimedPerfCheck : NSObject {

	BOOL _isSessionCompleted;
	os_unfair_lock_s _sessionCompletedLock;
	pc_sessionRef _pc_session;
	double _initialProcessMemoryPeak;
	double _initialProcessMemoryCurrent;

}
+(id)start;
-(void)setup;
-(void)dealloc;
-(id)endSessionAndReturnPerfCheckExtraInformation;
-(id)perfCheckLogStringWithPerfCheckInfo:(id)arg1 ;
-(id)init;
-(id)stop;
@end
