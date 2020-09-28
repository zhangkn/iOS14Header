/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/WBSTabItemSearchSupport.h>

@class NSString, NSArray, NSDictionary, NSURL, NSUUID;

@interface WBSCloudTab : NSObject <NSCopying, WBSTabItemSearchSupport> {

	BOOL _matchedLastSearch;
	BOOL _isShowingReader;
	BOOL _pinned;
	NSString* _titleForLastSearch;
	NSArray* _titleWords;
	NSString* _URLStringForLastSearch;
	NSArray* _URLStringComponents;
	NSString* _lastSearchTerm;
	NSDictionary* _readerScrollPositionDictionary;
	NSString* _title;
	NSURL* _url;
	NSUUID* _uuid;
	NSString* _sceneID;

}

@property (assign,nonatomic) BOOL isShowingReader;                                                          //@synthesize isShowingReader=_isShowingReader - In the implementation block
@property (nonatomic,copy) NSDictionary * readerScrollPositionDictionary;                                   //@synthesize readerScrollPositionDictionary=_readerScrollPositionDictionary - In the implementation block
@property (nonatomic,copy) NSString * title;                                                                //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSURL * url;                                                                   //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                                 //@synthesize uuid=_uuid - In the implementation block
@property (assign,getter=isPinned,nonatomic) BOOL pinned;                                                   //@synthesize pinned=_pinned - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentationForUserActivityUserInfo; 
@property (nonatomic,copy,readonly) NSString * sceneID;                                                     //@synthesize sceneID=_sceneID - In the implementation block
@property (nonatomic,copy) NSString * titleForLastSearch;                                                   //@synthesize titleForLastSearch=_titleForLastSearch - In the implementation block
@property (nonatomic,copy) NSArray * titleWords;                                                            //@synthesize titleWords=_titleWords - In the implementation block
@property (nonatomic,readonly) NSString * URLString; 
@property (nonatomic,copy) NSString * URLStringForLastSearch;                                               //@synthesize URLStringForLastSearch=_URLStringForLastSearch - In the implementation block
@property (nonatomic,copy) NSArray * URLStringComponents;                                                   //@synthesize URLStringComponents=_URLStringComponents - In the implementation block
@property (nonatomic,copy) NSString * lastSearchTerm;                                                       //@synthesize lastSearchTerm=_lastSearchTerm - In the implementation block
@property (assign,nonatomic) BOOL matchedLastSearch;                                                        //@synthesize matchedLastSearch=_matchedLastSearch - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_dictionaryWithURL:(id)arg1 uuid:(id)arg2 title:(id)arg3 isShowingReader:(BOOL)arg4 readerScrollPosition:(id)arg5 isPinned:(BOOL)arg6 sceneID:(id)arg7 ;
-(void)setPinned:(BOOL)arg1 ;
-(NSString *)lastSearchTerm;
-(NSString *)URLString;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isPinned;
-(NSArray *)URLStringComponents;
-(NSString *)sceneID;
-(BOOL)hasSameUUIDAndURLAsTab:(id)arg1 ;
-(void)setReaderScrollPositionDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)dictionaryRepresentationForUserActivityUserInfo;
-(void)setIsShowingReader:(BOOL)arg1 ;
-(NSString *)title;
-(NSString *)URLStringForLastSearch;
-(id)initWithURL:(id)arg1 uuid:(id)arg2 title:(id)arg3 isShowingReader:(BOOL)arg4 readerScrollPosition:(id)arg5 sceneID:(id)arg6 ;
-(void)setURLStringComponents:(NSArray *)arg1 ;
-(id)initWithDictionaryFromUserActivityUserInfo:(id)arg1 ;
-(BOOL)isShowingReader;
-(void)setUuid:(NSUUID *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)titleForLastSearch;
-(NSUUID *)uuid;
-(void)setLastSearchTerm:(NSString *)arg1 ;
-(void)setTitleWords:(NSArray *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)setURLStringForLastSearch:(NSString *)arg1 ;
-(NSURL *)url;
-(void)setTitleForLastSearch:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithURL:(id)arg1 uuid:(id)arg2 title:(id)arg3 isShowingReader:(BOOL)arg4 readerScrollPosition:(id)arg5 isPinned:(BOOL)arg6 ;
-(NSDictionary *)readerScrollPositionDictionary;
-(void)setMatchedLastSearch:(BOOL)arg1 ;
-(NSString *)description;
-(NSDictionary *)dictionaryRepresentation;
-(NSArray *)titleWords;
-(BOOL)matchedLastSearch;
@end
