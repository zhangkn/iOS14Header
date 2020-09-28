/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IKServiceRequestDelegate;
#import <ITMLKit/ITMLKit-Structs.h>
@class IKAppContext, IKServiceContext;

@interface IKServiceRequest : NSObject {

	int _state;
	struct {
		BOOL hasDidCompleteWithStatus;
	}  _srDelegateFlags;
	IKAppContext* _appContext;
	IKServiceContext* _serviceContext;
	id<IKServiceRequestDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) IKAppContext * appContext;                        //@synthesize appContext=_appContext - In the implementation block
@property (nonatomic,readonly) IKServiceContext * serviceContext;                       //@synthesize serviceContext=_serviceContext - In the implementation block
@property (assign,nonatomic,__weak) id<IKServiceRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)send;
-(void)cancel;
-(void)setDelegate:(id<IKServiceRequestDelegate>)arg1 ;
-(IKAppContext *)appContext;
-(id<IKServiceRequestDelegate>)delegate;
-(IKServiceContext *)serviceContext;
-(id)initWithAppContext:(id)arg1 serviceContext:(id)arg2 ;
-(void)_completedWithStatus:(long long)arg1 errorDictionary:(id)arg2 ;
@end
