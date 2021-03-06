/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:57 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

@class NSDictionary;


@protocol PXMutableBrowserSummaryController <NSObject>
@property (assign,nonatomic) BOOL shouldUseSubtitles; 
@property (assign,nonatomic) BOOL shouldUseNavigationTitle; 
@property (assign,nonatomic) BOOL shouldUseAbbreviatedDates; 
@property (assign,nonatomic) BOOL shouldShowLocationNames; 
@property (assign,nonatomic) unsigned long long containerDateFormatGranularity; 
@property (nonatomic,copy) NSDictionary * defaultAttributes; 
@property (nonatomic,copy) NSDictionary * emphasizedAttributes; 
@property (nonatomic,copy) NSDictionary * selectionAttributes; 
@required
-(void)setShouldUseAbbreviatedDates:(BOOL)arg1;
-(BOOL)shouldUseAbbreviatedDates;
-(NSDictionary *)defaultAttributes;
-(void)setShouldShowLocationNames:(BOOL)arg1;
-(void)setSelectionAttributes:(id)arg1;
-(void)invalidateLocalizedContainerItemsCount;
-(BOOL)shouldUseSubtitles;
-(void)setShouldUseNavigationTitle:(BOOL)arg1;
-(NSDictionary *)selectionAttributes;
-(void)invalidateContainerDateInterval;
-(void)invalidateContainerTitle;
-(void)setEmphasizedAttributes:(id)arg1;
-(NSDictionary *)emphasizedAttributes;
-(BOOL)shouldUseNavigationTitle;
-(void)invalidateFilteringContainerContent;
-(void)invalidateVisibleContent;
-(void)setShouldUseSubtitles:(BOOL)arg1;
-(BOOL)shouldShowLocationNames;
-(void)setContainerDateFormatGranularity:(unsigned long long)arg1;
-(void)setDefaultAttributes:(id)arg1;
-(void)invalidateSelection;
-(unsigned long long)containerDateFormatGranularity;

@end

