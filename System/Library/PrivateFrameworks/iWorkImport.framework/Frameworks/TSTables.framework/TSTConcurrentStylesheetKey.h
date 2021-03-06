/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:32 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSTables.framework/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSSStyle, TSSPropertyMap;

@interface TSTConcurrentStylesheetKey : NSObject {

	TSSStyle* _style;
	TSSPropertyMap* _propertyMap;

}

@property (nonatomic,retain) TSSStyle * style;                          //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) TSSPropertyMap * propertyMap;              //@synthesize propertyMap=_propertyMap - In the implementation block
-(TSSStyle *)style;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setStyle:(TSSStyle *)arg1 ;
-(TSSPropertyMap *)propertyMap;
-(void)setPropertyMap:(TSSPropertyMap *)arg1 ;
-(id)initWithStyle:(id)arg1 andPropertyMap:(id)arg2 ;
@end

