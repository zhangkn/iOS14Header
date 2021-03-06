/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:58 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXSurveyQuestionConfiguration.h>

@class MKMapView, NSString, PXSurveyQuestionConfigurationHandlers, CLLocation, UIView, UIImage;

@interface PXSurveyQuestionMapConfiguration : NSObject <PXSurveyQuestionConfiguration> {

	MKMapView* _mapView;
	NSString* _title;
	PXSurveyQuestionConfigurationHandlers* _handlers;
	CLLocation* _location;

}

@property (nonatomic,readonly) CLLocation * location;                                       //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) NSString * title;                                            //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UIView * contentView; 
@property (nonatomic,readonly) UIImage * contentImageForOneUp; 
@property (nonatomic,readonly) CGRect contentRectForOneUp; 
@property (nonatomic,retain) PXSurveyQuestionConfigurationHandlers * handlers;              //@synthesize handlers=_handlers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PXSurveyQuestionConfigurationHandlers *)handlers;
-(UIView *)contentView;
-(void)setHandlers:(PXSurveyQuestionConfigurationHandlers *)arg1 ;
-(void)layoutContentViewInRect:(CGRect)arg1 ;
-(UIImage *)contentImageForOneUp;
-(CGRect)contentRectForOneUp;
-(CLLocation *)location;
-(NSString *)title;
-(id)initWithTitle:(id)arg1 location:(id)arg2 ;
-(id)init;
@end

