/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:03 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProximityUI.framework/ProximityUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PRDevicePoseProviderDelegate;
@interface PRDevicePoseProvider : NSObject {

	id<PRDevicePoseProviderDelegate> _delegate;

}

@property (__weak) id<PRDevicePoseProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)reset;
-(void)setDelegate:(id<PRDevicePoseProviderDelegate>)arg1 ;
-(id<PRDevicePoseProviderDelegate>)delegate;
@end
