/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:02 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXGadgetProvider.h>
#import <libobjc.A.dylib/PXGadgetProviderDelegate.h>
#import <libobjc.A.dylib/PXHorizontalCollectionGadgetDelegate.h>

@class PXHorizontalCollectionGadget, NSString, NSDictionary, PXGadgetProvider;

@interface PXHorizontalCollectionGadgetProvider : PXGadgetProvider <PXGadgetProviderDelegate, PXHorizontalCollectionGadgetDelegate> {

	PXHorizontalCollectionGadget* _horizontalGadget;
	BOOL _hasLoaded;
	Class _horizontalCollectionGadgetClass;
	BOOL _prefersPagingEnabled;
	BOOL _isFixedHeight;
	NSString* _title;
	unsigned long long _gadgetType;
	unsigned long long _headerStyle;
	long long _defaultColumnSpan;
	NSDictionary* _columnSpanForTraitCollection;
	PXGadgetProvider* _contentGadgetProvider;

}

@property (nonatomic,copy,readonly) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) unsigned long long gadgetType;                           //@synthesize gadgetType=_gadgetType - In the implementation block
@property (assign,nonatomic) unsigned long long headerStyle;                          //@synthesize headerStyle=_headerStyle - In the implementation block
@property (assign,nonatomic) long long defaultColumnSpan;                             //@synthesize defaultColumnSpan=_defaultColumnSpan - In the implementation block
@property (nonatomic,copy) NSDictionary * columnSpanForTraitCollection;               //@synthesize columnSpanForTraitCollection=_columnSpanForTraitCollection - In the implementation block
@property (assign,nonatomic) BOOL prefersPagingEnabled;                               //@synthesize prefersPagingEnabled=_prefersPagingEnabled - In the implementation block
@property (assign,nonatomic) BOOL isFixedHeight;                                      //@synthesize isFixedHeight=_isFixedHeight - In the implementation block
@property (nonatomic,readonly) PXGadgetProvider * contentGadgetProvider;              //@synthesize contentGadgetProvider=_contentGadgetProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithIdentifier:(id)arg1 ;
-(void)generateGadgets;
-(void)setPrefersPagingEnabled:(BOOL)arg1 ;
-(void)setDefaultColumnSpan:(long long)arg1 ;
-(void)invalidateGadgets;
-(BOOL)prefersPagingEnabled;
-(NSString *)title;
-(void)loadDataForGadgets;
-(unsigned long long)gadgetType;
-(void)horizontalCollectionGadgetDatasourceDidUpdate:(id)arg1 ;
-(void)setGadgetType:(unsigned long long)arg1 ;
-(void)setColumnSpanForTraitCollection:(NSDictionary *)arg1 ;
-(BOOL)isFixedHeight;
-(id)initWithContentGadgetProvider:(id)arg1 title:(id)arg2 horizontalCollectionGadgetClass:(Class)arg3 ;
-(void)_updateHorizontalGadget;
-(id)_createHorizontalGadget;
-(long long)defaultColumnSpan;
-(NSDictionary *)columnSpanForTraitCollection;
-(void)setIsFixedHeight:(BOOL)arg1 ;
-(PXGadgetProvider *)contentGadgetProvider;
-(id)init;
-(unsigned long long)estimatedNumberOfGadgets;
-(void)resetPriorityDate;
-(id)initWithContentGadgetProvider:(id)arg1 title:(id)arg2 ;
-(void)setHeaderStyle:(unsigned long long)arg1 ;
-(unsigned long long)headerStyle;
-(void)loadDataForPriority;
@end
