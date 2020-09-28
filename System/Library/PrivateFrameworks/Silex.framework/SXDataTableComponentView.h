/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentView.h>
#import <libobjc.A.dylib/SXDataTableViewDataSource.h>
#import <libobjc.A.dylib/SXTangierControllerDelegate.h>
#import <libobjc.A.dylib/SXViewportChangeListener.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol SXImageViewFactory, SXComponentActionHandler, SXTextComponentLayoutHosting, SXComponentController;
@class SXDataTableView, SXDataTableComponentController, SXDataTableBlueprint, SXDataTableDictionary, SXScrollView, SXTangierController, CALayer, NSString;

@interface SXDataTableComponentView : SXComponentView <SXDataTableViewDataSource, SXTangierControllerDelegate, SXViewportChangeListener, UIGestureRecognizerDelegate> {

	id<SXImageViewFactory> _imageViewFactory;
	id<SXComponentActionHandler> _componentActionHandler;
	id<SXTextComponentLayoutHosting> _textComponentLayoutHosting;
	id<SXComponentController> _componentController;
	SXDataTableView* _tableView;
	SXDataTableComponentController* _dataTableComponentController;
	SXDataTableBlueprint* _blueprint;
	SXDataTableDictionary* _textViews;
	SXDataTableDictionary* _imageViews;
	SXScrollView* _scrollView;
	SXTangierController* _tangierController;
	CALayer* _rightShadow;
	CALayer* _leftShadow;

}

@property (nonatomic,readonly) id<SXImageViewFactory> imageViewFactory;                                         //@synthesize imageViewFactory=_imageViewFactory - In the implementation block
@property (nonatomic,readonly) id<SXComponentActionHandler> componentActionHandler;                             //@synthesize componentActionHandler=_componentActionHandler - In the implementation block
@property (nonatomic,__weak,readonly) id<SXTextComponentLayoutHosting> textComponentLayoutHosting;              //@synthesize textComponentLayoutHosting=_textComponentLayoutHosting - In the implementation block
@property (nonatomic,__weak,readonly) id<SXComponentController> componentController;                            //@synthesize componentController=_componentController - In the implementation block
@property (nonatomic,retain) SXDataTableView * tableView;                                                       //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) SXDataTableComponentController * dataTableComponentController;                     //@synthesize dataTableComponentController=_dataTableComponentController - In the implementation block
@property (nonatomic,retain) SXDataTableBlueprint * blueprint;                                                  //@synthesize blueprint=_blueprint - In the implementation block
@property (nonatomic,retain) SXDataTableDictionary * textViews;                                                 //@synthesize textViews=_textViews - In the implementation block
@property (nonatomic,retain) SXDataTableDictionary * imageViews;                                                //@synthesize imageViews=_imageViews - In the implementation block
@property (nonatomic,retain) SXScrollView * scrollView;                                                         //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) SXTangierController * tangierController;                                           //@synthesize tangierController=_tangierController - In the implementation block
@property (nonatomic,retain) CALayer * rightShadow;                                                             //@synthesize rightShadow=_rightShadow - In the implementation block
@property (nonatomic,retain) CALayer * leftShadow;                                                              //@synthesize leftShadow=_leftShadow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXComponentActionHandler>)componentActionHandler;
-(id<SXComponentController>)componentController;
-(SXDataTableBlueprint *)blueprint;
-(SXDataTableView *)tableView;
-(void)setTableView:(SXDataTableView *)arg1 ;
-(void)tangierControllerDidScroll:(id)arg1 ;
-(void)dealloc;
-(void)setTangierController:(SXTangierController *)arg1 ;
-(SXTangierController *)tangierController;
-(id<SXTextComponentLayoutHosting>)textComponentLayoutHosting;
-(void)setBlueprint:(SXDataTableBlueprint *)arg1 ;
-(void)setScrollView:(SXScrollView *)arg1 ;
-(SXDataTableDictionary *)imageViews;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(SXDataTableDictionary *)textViews;
-(void)setTextViews:(SXDataTableDictionary *)arg1 ;
-(void)setImageViews:(SXDataTableDictionary *)arg1 ;
-(SXScrollView *)scrollView;
-(void)presentComponentWithChanges:(SCD_Struct_SX17)arg1 ;
-(void)receivedInfo:(id)arg1 fromLayoutingPhaseWithIdentifier:(id)arg2 ;
-(id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 imageViewFactory:(id)arg5 componentActionHandler:(id)arg6 textComponentLayoutHosting:(id)arg7 componentController:(id)arg8 ;
-(SXDataTableComponentController *)dataTableComponentController;
-(void)setDataTableComponentController:(SXDataTableComponentController *)arg1 ;
-(id<SXImageViewFactory>)imageViewFactory;
-(BOOL)userInteractable;
-(id)contentViewForBehavior:(id)arg1 ;
-(id)descriptorForIndexPath:(NSRange)arg1 ;
-(void)setupShadowsIfNeeded;
-(void)updateTangierController;
-(void)addTextStorageForIndexPath:(NSRange)arg1 toCollectior:(id)arg2 ;
-(void)updateShadowOpacity;
-(CALayer *)leftShadow;
-(CALayer *)rightShadow;
-(void)setLeftShadow:(CALayer *)arg1 ;
-(void)setRightShadow:(CALayer *)arg1 ;
-(id)dataTableView:(id)arg1 viewForCellAtIndexPath:(NSRange)arg2 constraintToSize:(CGSize)arg3 ;
@end
