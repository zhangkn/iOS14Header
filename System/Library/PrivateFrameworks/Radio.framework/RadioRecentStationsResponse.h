/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:04 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray;

@interface RadioRecentStationsResponse : NSObject {

	NSDictionary* _responseDictionary;

}

@property (nonatomic,copy,readonly) NSArray * stationDictionaries; 
@property (nonatomic,copy,readonly) NSArray * stationGroups; 
-(NSArray *)stationGroups;
-(id)initWithResponseDictionary:(id)arg1 ;
-(NSArray *)stationDictionaries;
@end
