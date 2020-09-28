/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <libobjc.A.dylib/HUGridDisplayOptions.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIFont, NSNumber, HUGridCameraCellLayoutOptions, HUGridHeadlineCellLayoutOptions, HUGridStatusCellLayoutOptions, HUGridSceneCellLayoutOptions, HUGridScenePlaceholderLayoutOptions, HUGridServiceCellLayoutOptions, HUGridPlaceholderServiceCellLayoutOptions, HUNavigationBarLayoutOptions, HUDashboardButtonCellLayoutOptions, HUGridBannerCellLayoutOptions, HUGridStatusBannerCellLayoutOptions;

@interface HUGridLayoutOptions : NSObject <HUGridDisplayOptions, NSCopying> {

	BOOL _headlineHidden;
	BOOL _statusHidden;
	BOOL _editing;
	unsigned long long _contentColorStyle;
	long long _scrollDirection;
	NSString* _contentSizeCategory;
	unsigned long long _columnStyle;
	UIFont* _headlineFont;
	UIFont* _statusItemFont;
	UIFont* _statusDetailsFont;
	UIFont* _sectionHeaderFont;
	double _headlineBaselineToFirstStatusItemBaselineDistance;
	double _topOfViewToFirstStatusItemBaselineDistance;
	unsigned long long _maxStatusItemCount;
	unsigned long long _maxStatusItemNumberOfLines;
	double _statusItemBaselineToNextStatusItemBaselineDistance;
	double _lastStatusItemBaselineToStatusDetailsBaselineDistance;
	double _statusDetailsBaselineToFirstSectionTitleBaselineDistance;
	double _headlineBaselineToSceneHeaderBaselineDistance;
	double _sectionTopMargin;
	double _sectionBottomMargin;
	double _sectionLeadingMargin;
	double _sectionTrailingMargin;
	double _sectionBottomToNextSectionTitleBaselineDistance;
	double _minimumMarginBelowHeadline;
	double _minimumMarginBelowStatus;
	double _rowSpacing;
	double _columnSpacing;
	NSNumber* _overrideNumberOfColumns;
	HUGridCameraCellLayoutOptions* _cameraCellOptions;
	HUGridHeadlineCellLayoutOptions* _headlineCellOptions;
	HUGridStatusCellLayoutOptions* _statusCellOptions;
	HUGridSceneCellLayoutOptions* _sceneCellOptions;
	HUGridScenePlaceholderLayoutOptions* _placeholderSceneCellOptions;
	HUGridServiceCellLayoutOptions* _serviceCellOptions;
	HUGridPlaceholderServiceCellLayoutOptions* _placeholderServiceCellOptions;
	HUNavigationBarLayoutOptions* _navigationBarOptions;
	HUDashboardButtonCellLayoutOptions* _dashboardButtonCellOptions;
	HUGridBannerCellLayoutOptions* _bannerCellOptions;
	HUGridStatusBannerCellLayoutOptions* _statusBannerCellOptions;
	long long _numberOfCameraCellsPerRow;
	NSNumber* _overrideViewSizeSubclass;
	CGSize _viewSize;
	UIEdgeInsets _sectionTitleMargin;

}

@property (nonatomic,retain) NSNumber * overrideViewSizeSubclass;                                                  //@synthesize overrideViewSizeSubclass=_overrideViewSizeSubclass - In the implementation block
@property (nonatomic,readonly) CGSize viewSize;                                                                    //@synthesize viewSize=_viewSize - In the implementation block
@property (assign,nonatomic) long long scrollDirection;                                                            //@synthesize scrollDirection=_scrollDirection - In the implementation block
@property (assign,nonatomic) NSString * contentSizeCategory;                                                       //@synthesize contentSizeCategory=_contentSizeCategory - In the implementation block
@property (assign,nonatomic) unsigned long long columnStyle;                                                       //@synthesize columnStyle=_columnStyle - In the implementation block
@property (assign,nonatomic) BOOL headlineHidden;                                                                  //@synthesize headlineHidden=_headlineHidden - In the implementation block
@property (assign,nonatomic) BOOL statusHidden;                                                                    //@synthesize statusHidden=_statusHidden - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;                                                        //@synthesize editing=_editing - In the implementation block
@property (nonatomic,retain) UIFont * headlineFont;                                                                //@synthesize headlineFont=_headlineFont - In the implementation block
@property (nonatomic,retain) UIFont * statusItemFont;                                                              //@synthesize statusItemFont=_statusItemFont - In the implementation block
@property (nonatomic,retain) UIFont * statusDetailsFont;                                                           //@synthesize statusDetailsFont=_statusDetailsFont - In the implementation block
@property (nonatomic,retain) UIFont * sectionHeaderFont;                                                           //@synthesize sectionHeaderFont=_sectionHeaderFont - In the implementation block
@property (assign,nonatomic) double headlineBaselineToFirstStatusItemBaselineDistance;                             //@synthesize headlineBaselineToFirstStatusItemBaselineDistance=_headlineBaselineToFirstStatusItemBaselineDistance - In the implementation block
@property (assign,nonatomic) double topOfViewToFirstStatusItemBaselineDistance;                                    //@synthesize topOfViewToFirstStatusItemBaselineDistance=_topOfViewToFirstStatusItemBaselineDistance - In the implementation block
@property (assign,nonatomic) unsigned long long maxStatusItemCount;                                                //@synthesize maxStatusItemCount=_maxStatusItemCount - In the implementation block
@property (assign,nonatomic) unsigned long long maxStatusItemNumberOfLines;                                        //@synthesize maxStatusItemNumberOfLines=_maxStatusItemNumberOfLines - In the implementation block
@property (assign,nonatomic) double statusItemBaselineToNextStatusItemBaselineDistance;                            //@synthesize statusItemBaselineToNextStatusItemBaselineDistance=_statusItemBaselineToNextStatusItemBaselineDistance - In the implementation block
@property (assign,nonatomic) double lastStatusItemBaselineToStatusDetailsBaselineDistance;                         //@synthesize lastStatusItemBaselineToStatusDetailsBaselineDistance=_lastStatusItemBaselineToStatusDetailsBaselineDistance - In the implementation block
@property (assign,nonatomic) double statusDetailsBaselineToFirstSectionTitleBaselineDistance;                      //@synthesize statusDetailsBaselineToFirstSectionTitleBaselineDistance=_statusDetailsBaselineToFirstSectionTitleBaselineDistance - In the implementation block
@property (assign,nonatomic) double headlineBaselineToSceneHeaderBaselineDistance;                                 //@synthesize headlineBaselineToSceneHeaderBaselineDistance=_headlineBaselineToSceneHeaderBaselineDistance - In the implementation block
@property (assign,nonatomic) double sectionTopMargin;                                                              //@synthesize sectionTopMargin=_sectionTopMargin - In the implementation block
@property (assign,nonatomic) double sectionBottomMargin;                                                           //@synthesize sectionBottomMargin=_sectionBottomMargin - In the implementation block
@property (assign,nonatomic) double sectionLeadingMargin;                                                          //@synthesize sectionLeadingMargin=_sectionLeadingMargin - In the implementation block
@property (assign,nonatomic) double sectionTrailingMargin;                                                         //@synthesize sectionTrailingMargin=_sectionTrailingMargin - In the implementation block
@property (assign,nonatomic) double sectionBottomToNextSectionTitleBaselineDistance;                               //@synthesize sectionBottomToNextSectionTitleBaselineDistance=_sectionBottomToNextSectionTitleBaselineDistance - In the implementation block
@property (assign,nonatomic) UIEdgeInsets sectionTitleMargin;                                                      //@synthesize sectionTitleMargin=_sectionTitleMargin - In the implementation block
@property (assign,nonatomic) double minimumMarginBelowHeadline;                                                    //@synthesize minimumMarginBelowHeadline=_minimumMarginBelowHeadline - In the implementation block
@property (assign,nonatomic) double minimumMarginBelowStatus;                                                      //@synthesize minimumMarginBelowStatus=_minimumMarginBelowStatus - In the implementation block
@property (assign,nonatomic) double rowSpacing;                                                                    //@synthesize rowSpacing=_rowSpacing - In the implementation block
@property (assign,nonatomic) double columnSpacing;                                                                 //@synthesize columnSpacing=_columnSpacing - In the implementation block
@property (nonatomic,retain) NSNumber * overrideNumberOfColumns;                                                   //@synthesize overrideNumberOfColumns=_overrideNumberOfColumns - In the implementation block
@property (nonatomic,copy) HUGridCameraCellLayoutOptions * cameraCellOptions;                                      //@synthesize cameraCellOptions=_cameraCellOptions - In the implementation block
@property (nonatomic,copy) HUGridHeadlineCellLayoutOptions * headlineCellOptions;                                  //@synthesize headlineCellOptions=_headlineCellOptions - In the implementation block
@property (nonatomic,copy) HUGridStatusCellLayoutOptions * statusCellOptions;                                      //@synthesize statusCellOptions=_statusCellOptions - In the implementation block
@property (nonatomic,copy) HUGridSceneCellLayoutOptions * sceneCellOptions;                                        //@synthesize sceneCellOptions=_sceneCellOptions - In the implementation block
@property (nonatomic,copy) HUGridScenePlaceholderLayoutOptions * placeholderSceneCellOptions;                      //@synthesize placeholderSceneCellOptions=_placeholderSceneCellOptions - In the implementation block
@property (nonatomic,copy) HUGridServiceCellLayoutOptions * serviceCellOptions;                                    //@synthesize serviceCellOptions=_serviceCellOptions - In the implementation block
@property (nonatomic,copy) HUGridPlaceholderServiceCellLayoutOptions * placeholderServiceCellOptions;              //@synthesize placeholderServiceCellOptions=_placeholderServiceCellOptions - In the implementation block
@property (nonatomic,copy) HUNavigationBarLayoutOptions * navigationBarOptions;                                    //@synthesize navigationBarOptions=_navigationBarOptions - In the implementation block
@property (nonatomic,copy) HUDashboardButtonCellLayoutOptions * dashboardButtonCellOptions;                        //@synthesize dashboardButtonCellOptions=_dashboardButtonCellOptions - In the implementation block
@property (nonatomic,copy) HUGridBannerCellLayoutOptions * bannerCellOptions;                                      //@synthesize bannerCellOptions=_bannerCellOptions - In the implementation block
@property (nonatomic,copy) HUGridStatusBannerCellLayoutOptions * statusBannerCellOptions;                          //@synthesize statusBannerCellOptions=_statusBannerCellOptions - In the implementation block
@property (nonatomic,readonly) long long viewSizeSubclass; 
@property (nonatomic,readonly) long long cellSizeSubclass; 
@property (nonatomic,readonly) double gutter; 
@property (nonatomic,readonly) long long numberOfColumns; 
@property (nonatomic,readonly) double pointWidthForCurrentViewSizeSubclass; 
@property (nonatomic,readonly) double pointWidthForFullWidthCell; 
@property (nonatomic,readonly) double fixedWidthForCell; 
@property (nonatomic,readonly) double cameraCellWidth; 
@property (nonatomic,readonly) double cameraCellHeight; 
@property (nonatomic,readonly) long long numberOfCameraCellsPerRow;                                                //@synthesize numberOfCameraCellsPerRow=_numberOfCameraCellsPerRow - In the implementation block
@property (nonatomic,readonly) double headlineCellHeight; 
@property (nonatomic,readonly) double statusListCellHeight; 
@property (nonatomic,readonly) double sectionHeaderCellHeight; 
@property (nonatomic,readonly) double statusListCellTopMargin; 
@property (nonatomic,readonly) double statusListCellBottomMargin; 
@property (nonatomic,readonly) double largeTitleCellTopMargin; 
@property (assign,nonatomic) unsigned long long contentColorStyle;                                                 //@synthesize contentColorStyle=_contentColorStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultOptionsForViewSize:(CGSize)arg1 columnStyle:(unsigned long long)arg2 overrideSizeSubclass:(id)arg3 ;
+(id)defaultOptionsForViewSize:(CGSize)arg1 ;
+(id)defaultOptionsForViewSize:(CGSize)arg1 columnStyle:(unsigned long long)arg2 ;
+(unsigned long long)_numberOfColumnsForFlexibleWidthStyleWithSizeSubclass:(long long)arg1 ;
+(id)defaultOptionsForViewSize:(CGSize)arg1 overrideSizeSubclass:(long long)arg2 ;
-(long long)scrollDirection;
-(void)setEditing:(BOOL)arg1 ;
-(void)setSectionTitleMargin:(UIEdgeInsets)arg1 ;
-(void)setColumnSpacing:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)minimumMarginBelowHeadline;
-(void)setSectionBottomMargin:(double)arg1 ;
-(void)setSectionLeadingMargin:(double)arg1 ;
-(void)setSectionTrailingMargin:(double)arg1 ;
-(double)statusListCellTopMargin;
-(double)statusListCellBottomMargin;
-(BOOL)isEditing;
-(CGSize)viewSize;
-(void)setContentSizeCategory:(NSString *)arg1 ;
-(double)gutter;
-(HUGridCameraCellLayoutOptions *)cameraCellOptions;
-(double)cameraCellWidth;
-(double)cameraCellHeight;
-(long long)numberOfCameraCellsPerRow;
-(void)setRowSpacing:(double)arg1 ;
-(void)setScrollDirection:(long long)arg1 ;
-(NSString *)contentSizeCategory;
-(long long)numberOfColumns;
-(UIEdgeInsets)sectionTitleMargin;
-(UIFont *)sectionHeaderFont;
-(unsigned long long)contentColorStyle;
-(double)rowSpacing;
-(HUGridPlaceholderServiceCellLayoutOptions *)placeholderServiceCellOptions;
-(HUGridServiceCellLayoutOptions *)serviceCellOptions;
-(HUGridHeadlineCellLayoutOptions *)headlineCellOptions;
-(HUGridStatusBannerCellLayoutOptions *)statusBannerCellOptions;
-(HUDashboardButtonCellLayoutOptions *)dashboardButtonCellOptions;
-(double)pointWidthForFullWidthCell;
-(double)headlineCellHeight;
-(double)pointWidthForCurrentViewSizeSubclass;
-(double)statusListCellHeight;
-(double)pointWidthForNumberOfColumns:(long long)arg1 ;
-(double)columnSpacing;
-(unsigned long long)maxStatusItemCount;
-(void)setMaxStatusItemCount:(unsigned long long)arg1 ;
-(double)sectionLeadingMargin;
-(double)sectionTopMargin;
-(double)sectionBottomMargin;
-(double)sectionTrailingMargin;
-(double)sectionHeaderCellHeight;
-(void)setStatusHidden:(BOOL)arg1 ;
-(void)setHeadlineHidden:(BOOL)arg1 ;
-(long long)viewSizeSubclass;
-(HUNavigationBarLayoutOptions *)navigationBarOptions;
-(double)minimumMarginBelowStatus;
-(void)setSectionTopMargin:(double)arg1 ;
-(void)setContentColorStyle:(unsigned long long)arg1 ;
-(NSString *)description;
-(HUGridSceneCellLayoutOptions *)sceneCellOptions;
-(double)fixedWidthForCell;
-(void)setSectionBottomToNextSectionTitleBaselineDistance:(double)arg1 ;
-(void)setOverrideNumberOfColumns:(NSNumber *)arg1 ;
-(HUGridScenePlaceholderLayoutOptions *)placeholderSceneCellOptions;
-(NSNumber *)overrideNumberOfColumns;
-(unsigned long long)columnStyle;
-(double)largeTitleCellTopMargin;
-(double)statusItemBaselineToNextStatusItemBaselineDistance;
-(UIFont *)statusDetailsFont;
-(unsigned long long)maxStatusItemNumberOfLines;
-(UIFont *)statusItemFont;
-(HUGridStatusCellLayoutOptions *)statusCellOptions;
-(id)initWithViewSize:(CGSize)arg1 columnStyle:(unsigned long long)arg2 overrideSizeSubclass:(id)arg3 ;
-(long long)cellSizeSubclass;
-(void)setCameraCellOptions:(HUGridCameraCellLayoutOptions *)arg1 ;
-(void)setStatusCellOptions:(HUGridStatusCellLayoutOptions *)arg1 ;
-(void)setSceneCellOptions:(HUGridSceneCellLayoutOptions *)arg1 ;
-(void)setPlaceholderSceneCellOptions:(HUGridScenePlaceholderLayoutOptions *)arg1 ;
-(void)setServiceCellOptions:(HUGridServiceCellLayoutOptions *)arg1 ;
-(void)setPlaceholderServiceCellOptions:(HUGridPlaceholderServiceCellLayoutOptions *)arg1 ;
-(void)setBannerCellOptions:(HUGridBannerCellLayoutOptions *)arg1 ;
-(void)setStatusBannerCellOptions:(HUGridStatusBannerCellLayoutOptions *)arg1 ;
-(void)setHeadlineFont:(UIFont *)arg1 ;
-(void)setStatusItemFont:(UIFont *)arg1 ;
-(void)setStatusDetailsFont:(UIFont *)arg1 ;
-(void)setSectionHeaderFont:(UIFont *)arg1 ;
-(void)setHeadlineBaselineToFirstStatusItemBaselineDistance:(double)arg1 ;
-(void)setTopOfViewToFirstStatusItemBaselineDistance:(double)arg1 ;
-(void)setMaxStatusItemNumberOfLines:(unsigned long long)arg1 ;
-(void)setStatusItemBaselineToNextStatusItemBaselineDistance:(double)arg1 ;
-(void)setLastStatusItemBaselineToStatusDetailsBaselineDistance:(double)arg1 ;
-(void)setStatusDetailsBaselineToFirstSectionTitleBaselineDistance:(double)arg1 ;
-(void)setHeadlineBaselineToSceneHeaderBaselineDistance:(double)arg1 ;
-(void)setNavigationBarOptions:(HUNavigationBarLayoutOptions *)arg1 ;
-(void)setDashboardButtonCellOptions:(HUDashboardButtonCellLayoutOptions *)arg1 ;
-(void)setHeadlineCellOptions:(HUGridHeadlineCellLayoutOptions *)arg1 ;
-(double)sectionBottomToNextSectionTitleBaselineDistance;
-(void)setMinimumMarginBelowHeadline:(double)arg1 ;
-(void)setMinimumMarginBelowStatus:(double)arg1 ;
-(NSNumber *)overrideViewSizeSubclass;
-(BOOL)statusHidden;
-(BOOL)headlineHidden;
-(UIFont *)headlineFont;
-(double)headlineBaselineToFirstStatusItemBaselineDistance;
-(double)topOfViewToFirstStatusItemBaselineDistance;
-(double)lastStatusItemBaselineToStatusDetailsBaselineDistance;
-(double)statusDetailsBaselineToFirstSectionTitleBaselineDistance;
-(double)headlineBaselineToSceneHeaderBaselineDistance;
-(HUGridBannerCellLayoutOptions *)bannerCellOptions;
-(id)_childDisplayOptions;
-(double)_pointWidthForFlexibleColumnStyleWithFractionalNumberOfColumns:(double)arg1 totalNumberOfColumns:(long long)arg2 totalWidth:(double)arg3 useDefaultSectionMargin:(BOOL)arg4 ;
-(double)_pointWidthForFractionalNumberOfColumns:(double)arg1 ;
-(double)_pointWidthForFixedColumnStyleWithFractionalNumberOfColumns:(double)arg1 ;
-(double)_preferredSectionHeightForNumberOfRows:(unsigned long long)arg1 withCellHeight:(double)arg2 ;
-(id)_columnStyleToString:(unsigned long long)arg1 ;
-(double)preferredSectionHeightForNumberOfSceneRows:(unsigned long long)arg1 ;
-(double)preferredSectionHeightForNumberOfServiceRows:(unsigned long long)arg1 spanningColumns:(unsigned long long)arg2 ;
-(double)pointWidthForWelcomeUIBanner;
-(void)setColumnStyle:(unsigned long long)arg1 ;
-(void)setOverrideViewSizeSubclass:(NSNumber *)arg1 ;
@end
