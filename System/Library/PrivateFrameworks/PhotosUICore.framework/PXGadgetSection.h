/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:01 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class NSString, NSArray, PXGadgetSectionHeader, PXGadgetSpec;

@interface PXGadgetSection : NSObject {

	long long _changeCount;
	NSString* _identifier;
	NSArray* _gadgets;
	PXGadgetSectionHeader* _sectionHeader;
	PXGadgetSpec* _gadgetSpec;

}

@property (nonatomic,readonly) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSArray * gadgets;                                  //@synthesize gadgets=_gadgets - In the implementation block
@property (nonatomic,readonly) PXGadgetSectionHeader * sectionHeader;              //@synthesize sectionHeader=_sectionHeader - In the implementation block
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec;                            //@synthesize gadgetSpec=_gadgetSpec - In the implementation block
-(NSString *)identifier;
-(PXGadgetSpec *)gadgetSpec;
-(NSArray *)gadgets;
-(void)setGadgetSpec:(PXGadgetSpec *)arg1 ;
-(id)init;
-(PXGadgetSectionHeader *)sectionHeader;
-(id)initWithIdentifier:(id)arg1 gadgets:(id)arg2 ;
-(id)description;
@end
