/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/ARViewerVendorProtocol.h>

@protocol ARViewerVendorProtocol;
@class NSString;

@interface _ARViewerViewController : UIViewController <ARViewerVendorProtocol> {

	id<ARViewerVendorProtocol> _arviewerDelegate;

}

@property (retain) id<ARViewerVendorProtocol> arviewerDelegate;              //@synthesize arviewerDelegate=_arviewerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_remoteViewControllerInterface;
+(id)_exportedInterface;
-(oneway long long)statusBarOrientation;
-(oneway void)setStatusBarOrientation:(long long)arg1 ;
-(oneway BOOL)isIgnoringInteractionEvents;
-(id<ARViewerVendorProtocol>)arviewerDelegate;
-(void)setArviewerDelegate:(id<ARViewerVendorProtocol>)arg1 ;
@end

