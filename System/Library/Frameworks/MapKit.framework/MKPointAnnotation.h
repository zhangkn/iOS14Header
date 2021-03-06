/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKShape.h>
#import <libobjc.A.dylib/MKGeoJSONObject.h>
#import <libobjc.A.dylib/MKCustomFeatureAnnotation.h>
#import <libobjc.A.dylib/MKAnnotationRepresentation.h>
#import <libobjc.A.dylib/MKAnnotationPrivate.h>

@class CLLocation, VKCustomFeature, NSString;

@interface MKPointAnnotation : MKShape <MKGeoJSONObject, MKCustomFeatureAnnotation, MKAnnotationRepresentation, MKAnnotationPrivate> {

	CLLocationCoordinate2D _coordinate;
	long long _representation;
	VKCustomFeature* _customFeature;
	CLLocation* _location;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long representation;                       //@synthesize representation=_representation - In the implementation block
@property (assign,nonatomic) CLLocationCoordinate2D coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) BOOL showsBalloonCallout; 
@property (assign,nonatomic) double course; 
@property (nonatomic,retain) CLLocation * location;                          //@synthesize location=_location - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 ;
-(BOOL)isPersistent;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(id)annotation;
-(CLLocationCoordinate2D)coordinate;
-(BOOL)showsBalloonCallout;
-(CLLocation *)location;
-(void)prepareForReuse;
-(id)reuseIdentifier;
-(void)setLocation:(CLLocation *)arg1 ;
-(long long)representation;
-(id)init;
-(id)_initWithGeoJSONObject:(id)arg1 error:(id*)arg2 ;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 title:(id)arg2 subtitle:(id)arg3 ;
-(void)setShowsBalloonCallout:(BOOL)arg1 ;
-(void)setRepresentation:(long long)arg1 ;
-(void)_setHiddenForOffscreen:(BOOL)arg1 ;
-(BOOL)shouldRepresentSelf;
-(void)_invalidateCachedCoordinate;
-(BOOL)_shouldDeselectWhenDragged;
-(id)feature;
-(BOOL)_isPendingSelectionAnimated;
-(id)viewRepresentation;
@end

