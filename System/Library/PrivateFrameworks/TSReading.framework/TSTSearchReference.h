/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:38 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSKSearchReference.h>

@protocol TSKAnnotation;
@class TSTTableInfo, NSArray, NSString;

@interface TSTSearchReference : NSObject <TSKSearchReference> {

	TSTTableInfo* _tableInfo;
	SCD_Struct_TS147 _cellID;
	NSRange _range;
	BOOL _autohideHighlight;
	BOOL _pulseHighlight;
	NSArray* _findHighlights;
	id<TSKAnnotation> annotation;
	CGPoint searchReferencePoint;

}

@property (assign,nonatomic) CGPoint searchReferencePoint; 
@property (nonatomic,retain) NSArray * findHighlights;                  //@synthesize findHighlights=_findHighlights - In the implementation block
@property (assign,nonatomic) BOOL pulseHighlight;                       //@synthesize pulseHighlight=_pulseHighlight - In the implementation block
@property (assign,nonatomic) BOOL autohideHighlight;                    //@synthesize autohideHighlight=_autohideHighlight - In the implementation block
@property (nonatomic,retain) id<TSKAnnotation> annotation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)searchReferenceWithTableInfo:(id)arg1 cellID:(SCD_Struct_TS147)arg2 range:(NSRange)arg3 ;
-(NSRange)range;
-(id<TSKAnnotation>)annotation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setCellID:(SCD_Struct_TS147)arg1 ;
-(id)model;
-(BOOL)isEqual:(id)arg1 ;
-(void)setRange:(NSRange)arg1 ;
-(void)setAnnotation:(id<TSKAnnotation>)arg1 ;
-(id)selection;
-(SCD_Struct_TS147)cellID;
-(NSString *)description;
-(CGPoint)searchReferencePoint;
-(void)setSearchReferencePoint:(CGPoint)arg1 ;
-(id)commandForReplacingWithString:(id)arg1 options:(unsigned long long)arg2 ;
-(id)searchReferenceForReplacingWithString:(id)arg1 options:(unsigned long long)arg2 authorCreatedWithCommand:(id*)arg3 ;
-(id)searchReferenceStart;
-(id)searchReferenceEnd;
-(BOOL)isReplaceable;
-(NSArray *)findHighlights;
-(void)setFindHighlights:(NSArray *)arg1 ;
-(BOOL)pulseHighlight;
-(void)setPulseHighlight:(BOOL)arg1 ;
-(BOOL)autohideHighlight;
-(void)setAutohideHighlight:(BOOL)arg1 ;
-(id)tableInfo;
-(id)initWithTableInfo:(id)arg1 cellID:(SCD_Struct_TS147)arg2 range:(NSRange)arg3 ;
@end

