/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsUI/CloudDocsUI-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSArray;

@interface BRGeometry : NSObject <NSCoding> {

	BOOL _hasAmbiguousLayout;
	BOOL _isClipped;
	NSString* _name;
	NSString* _contentDescription;
	NSArray* _subitems;
	CGRect _absoluteFrame;

}

@property (nonatomic,copy) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) CGRect absoluteFrame;                     //@synthesize absoluteFrame=_absoluteFrame - In the implementation block
@property (assign,nonatomic) BOOL hasAmbiguousLayout;                  //@synthesize hasAmbiguousLayout=_hasAmbiguousLayout - In the implementation block
@property (assign,nonatomic) BOOL isClipped;                           //@synthesize isClipped=_isClipped - In the implementation block
@property (nonatomic,copy) NSString * contentDescription;              //@synthesize contentDescription=_contentDescription - In the implementation block
@property (nonatomic,copy) NSArray * subitems;                         //@synthesize subitems=_subitems - In the implementation block
+(void)initialize;
-(id)recursiveDescription;
-(void)setContentDescription:(NSString *)arg1 ;
-(id)data;
-(void)setSubitems:(NSArray *)arg1 ;
-(void)setIsClipped:(BOOL)arg1 ;
-(BOOL)isClipped;
-(NSString *)contentDescription;
-(NSArray *)subitems;
-(void)setAbsoluteFrame:(CGRect)arg1 ;
-(CGRect)absoluteFrame;
-(BOOL)hasAmbiguousLayout;
-(void)setName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithView:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(id)initWithView:(id)arg1 rootView:(id)arg2 ;
-(id)gatherSubviews:(id)arg1 ;
-(void)setHasAmbiguousLayout:(BOOL)arg1 ;
-(BOOL)isValidForGeometryValidation:(unsigned long long)arg1 offendingGeometry:(id*)arg2 ;
-(BOOL)isEqualToTemplate:(id)arg1 diagnostic:(id*)arg2 ;
@end

