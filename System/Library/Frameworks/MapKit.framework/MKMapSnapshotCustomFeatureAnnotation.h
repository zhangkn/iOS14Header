/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/MKCustomFeatureAnnotation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _MKAnnotationViewCustomFeatureAnnotation, NSString;

@interface MKMapSnapshotCustomFeatureAnnotation : NSObject <MKCustomFeatureAnnotation, NSSecureCoding> {

	_MKAnnotationViewCustomFeatureAnnotation* _internalCustomFeatureAnnotation;

}

@property (nonatomic,retain) _MKAnnotationViewCustomFeatureAnnotation * internalCustomFeatureAnnotation;              //@synthesize internalCustomFeatureAnnotation=_internalCustomFeatureAnnotation - In the implementation block
@property (nonatomic,readonly) BOOL showsBalloonCallout; 
@property (assign,nonatomic) CGSize coordinate; 
@property (assign,nonatomic) double course; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)customFeatureAnnotationForMapItem:(id)arg1 styleAttributes:(id)arg2 ;
+(id)customFeatureAnnotationForMapItem:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(void)setCoordinate:(CGSize)arg1 ;
-(CGSize)coordinate;
-(BOOL)showsBalloonCallout;
-(void)setInternalCustomFeatureAnnotation:(_MKAnnotationViewCustomFeatureAnnotation *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)feature;
-(_MKAnnotationViewCustomFeatureAnnotation *)internalCustomFeatureAnnotation;
-(id)initWithCustomFeature:(id)arg1 coordinate:(CGSize)arg2 ;
@end
