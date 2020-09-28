/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSDictionary, NSString, NSSet;

@interface SelectedCheckboxFromIcon__generated__Output : NSObject <MLFeatureProvider> {

	NSDictionary* _labelProbability;
	NSString* _label;

}

@property (nonatomic,retain) NSDictionary * labelProbability;              //@synthesize labelProbability=_labelProbability - In the implementation block
@property (nonatomic,retain) NSString * label;                             //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(NSSet *)featureNames;
-(id)featureValueForName:(id)arg1 ;
-(NSDictionary *)labelProbability;
-(void)setLabelProbability:(NSDictionary *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(id)initWithLabelProbability:(id)arg1 label:(id)arg2 ;
@end
