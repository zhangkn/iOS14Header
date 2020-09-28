/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PDFExtensionProtocol, PDFHostViewControllerDelegate;
#import <PDFKit/PDFKit-Structs.h>
@class NSExtension, UIScrollView, PDFExtensionTopView, PDFPasswordViewController, NSString, PDFPageLabelView, UITapGestureRecognizer, UILongPressGestureRecognizer, PDFPanGestureRecognizer, UIPointerInteraction;

@interface PDFHostViewControllerPrivate : NSObject {

	NSExtension* extension;
	id<PDFExtensionProtocol> extensionProxy;
	UIScrollView* hostScrollView;
	id<PDFHostViewControllerDelegate> hostViewControllerDelegate;
	PDFExtensionTopView* topView;
	PDFPasswordViewController* passwordViewController;
	NSString* password;
	PDFPageLabelView* pageLabelView;
	BOOL isUnlocked;
	long long currentPageIndex;
	long long pageCount;
	CGSize documentViewSize;
	double minScaleFactor;
	double maxScaleFactor;
	BOOL hasSelection;
	CGPoint topLeftSelectionPoint;
	CGPoint bottomRightSelectionPoint;
	UITapGestureRecognizer* tapGestureRecognizer;
	UITapGestureRecognizer* doubleTapGestureRecognizer;
	UILongPressGestureRecognizer* longPressGestureRecognizer;
	PDFPanGestureRecognizer* panGestureRecognizer;
	BOOL recentGestureIsIndirectTouch;
	UIPointerInteraction* pointerInteraction;
	/*^block*/id pdfPointerCompletionHandler;
	CGRect insetBoundsInDocument;
	CGRect scrollViewFrame;
	UIEdgeInsets contentInset;
	UIEdgeInsets pdfSafeAreaInsets;
	double horizontalScaleFactor;
	CGPoint documentViewCenter;
	BOOL pdfViewIsRotating;
	BOOL pdfViewNeedsUpdate;
	BOOL hostScrollViewObserverIsActive;
	/*^block*/id snapshotCompletion;

}
@end
