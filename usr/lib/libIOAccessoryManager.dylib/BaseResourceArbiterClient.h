/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:32:53 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libIOAccessoryManager.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ResourceArbiterClientDelegate;
@interface BaseResourceArbiterClient : NSObject {

	id<ResourceArbiterClientDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ResourceArbiterClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<ResourceArbiterClientDelegate>)arg1 ;
-(id<ResourceArbiterClientDelegate>)delegate;
-(void)releaseResourceAccess;
-(BOOL)synchRequestResourceAccess;
-(BOOL)asynchRequestResourceAccess:(BOOL)arg1 ;
@end
