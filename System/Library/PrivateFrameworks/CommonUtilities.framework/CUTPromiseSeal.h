/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CUTPromise;

@interface CUTPromiseSeal : NSObject {

	CUTPromise* _promise;

}

@property (nonatomic,retain) CUTPromise * promise;              //@synthesize promise=_promise - In the implementation block
-(id)initWithQueue:(id)arg1 ;
-(void)setPromise:(CUTPromise *)arg1 ;
-(void)fulfillWithValue:(id)arg1 ;
-(CUTPromise *)promise;
-(void)failWithError:(id)arg1 ;
@end
