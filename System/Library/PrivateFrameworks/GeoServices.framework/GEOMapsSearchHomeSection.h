/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOCollectionSuggestionResult, NSString, GEOPublisherSuggestionResult, NSArray;

@interface GEOMapsSearchHomeSection : NSObject {

	GEOCollectionSuggestionResult* _collectionSuggestions;
	NSString* _name;
	GEOPublisherSuggestionResult* _publisherSuggestions;
	NSArray* _searchCategories;
	unsigned long long _sectionType;

}

@property (nonatomic,readonly) NSString * name;                                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long sectionType;                                     //@synthesize sectionType=_sectionType - In the implementation block
@property (nonatomic,readonly) NSArray * searchCategories;                                         //@synthesize searchCategories=_searchCategories - In the implementation block
@property (nonatomic,readonly) GEOCollectionSuggestionResult * collectionSuggestions;              //@synthesize collectionSuggestions=_collectionSuggestions - In the implementation block
@property (nonatomic,readonly) GEOPublisherSuggestionResult * publisherSuggestions;                //@synthesize publisherSuggestions=_publisherSuggestions - In the implementation block
-(unsigned long long)sectionType;
-(NSArray *)searchCategories;
-(GEOPublisherSuggestionResult *)publisherSuggestions;
-(BOOL)dataModelIsValid:(id)arg1 ;
-(GEOCollectionSuggestionResult *)collectionSuggestions;
-(NSString *)name;
-(id)initWithMapsSearchHomeSection:(id)arg1 mapsResults:(id)arg2 ;
-(id)description;
@end
