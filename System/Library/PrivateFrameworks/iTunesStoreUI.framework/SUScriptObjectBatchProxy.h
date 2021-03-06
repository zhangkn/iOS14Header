/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SUScriptObjectInvocationBatch;

@interface SUScriptObjectBatchProxy : NSObject {

	SUScriptObjectInvocationBatch* _invocationBatch;
	id _target;

}

@property (assign) SUScriptObjectInvocationBatch * invocationBatch;              //@synthesize invocationBatch=_invocationBatch - In the implementation block
@property (assign) id target;                                                    //@synthesize target=_target - In the implementation block
-(void)forwardInvocation:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)target;
-(void)setTarget:(id)arg1 ;
-(void)setInvocationBatch:(SUScriptObjectInvocationBatch *)arg1 ;
-(SUScriptObjectInvocationBatch *)invocationBatch;
@end

