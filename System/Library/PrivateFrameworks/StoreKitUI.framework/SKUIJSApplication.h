/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSApplication.h>
#import <libobjc.A.dylib/SKUIJSApplication.h>

@protocol SKUIJSApplication <JSExport>
@property (nonatomic,readonly) BOOL pageRenderMetricsEnabled; 
@property (readonly) BOOL isRunningTests; 
@required
-(BOOL)isRunningTests;
-(BOOL)pageRenderMetricsEnabled;
-(void)launchFailed;
-(void)launchComplete:(id)arg1;
-(void)sendDocumentMessage:(id)arg1 :(id)arg2 :(id)arg3;

@end


@class SKUIApplicationController;

@interface SKUIJSApplication : IKJSApplication <SKUIJSApplication> {

	SKUIApplicationController* _applicationController;

}

@property (nonatomic,__weak,readonly) SKUIApplicationController * applicationController;              //@synthesize applicationController=_applicationController - In the implementation block
@property (nonatomic,readonly) BOOL pageRenderMetricsEnabled; 
@property (readonly) BOOL isRunningTests; 
-(BOOL)isRunningTests;
-(SKUIApplicationController *)applicationController;
-(BOOL)pageRenderMetricsEnabled;
-(void)launchFailed;
-(void)launchComplete:(id)arg1 ;
-(void)sendDocumentMessage:(id)arg1 :(id)arg2 :(id)arg3 ;
-(id)initWithAppContext:(id)arg1 applicationController:(id)arg2 ;
@end

