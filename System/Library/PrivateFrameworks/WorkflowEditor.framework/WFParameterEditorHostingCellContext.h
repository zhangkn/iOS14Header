/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:27:01 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFComponentNavigationContext;
@class WFParameterEditorHostingCell, WFModuleAppearance, UITraitCollection;

@interface WFParameterEditorHostingCellContext : NSObject {

	id<WFComponentNavigationContext> _navigationContext;
	WFParameterEditorHostingCell* _cell;
	WFModuleAppearance* _appearance;
	UITraitCollection* _traitCollection;

}

@property (nonatomic,retain) id<WFComponentNavigationContext> navigationContext;              //@synthesize navigationContext=_navigationContext - In the implementation block
@property (assign,nonatomic,__weak) WFParameterEditorHostingCell * cell;                      //@synthesize cell=_cell - In the implementation block
@property (nonatomic,retain) WFModuleAppearance * appearance;                                 //@synthesize appearance=_appearance - In the implementation block
@property (nonatomic,retain) UITraitCollection * traitCollection;                             //@synthesize traitCollection=_traitCollection - In the implementation block
-(WFParameterEditorHostingCell *)cell;
-(WFModuleAppearance *)appearance;
-(UITraitCollection *)traitCollection;
-(void)setCell:(WFParameterEditorHostingCell *)arg1 ;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(void)setAppearance:(WFModuleAppearance *)arg1 ;
-(id<WFComponentNavigationContext>)navigationContext;
-(void)setNavigationContext:(id<WFComponentNavigationContext>)arg1 ;
@end
