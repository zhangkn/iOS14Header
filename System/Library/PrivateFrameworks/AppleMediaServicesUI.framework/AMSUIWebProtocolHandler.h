/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSURLProtocolHandler.h>

@protocol AMSUIWebProtocolDelegate;
@interface AMSUIWebProtocolHandler : AMSURLProtocolHandler {

	id<AMSUIWebProtocolDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AMSUIWebProtocolDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<AMSUIWebProtocolDelegate>)arg1 ;
-(id<AMSUIWebProtocolDelegate>)delegate;
-(void)reconfigureNewRequest:(id)arg1 originalTask:(id)arg2 redirect:(BOOL)arg3 error:(id*)arg4 ;
@end

