//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _SFSearchEngineInfo;

@interface SearchQueryBuilder : NSObject
{
    NSString *queryString;	// 8 = 0x8
    _SFSearchEngineInfo *engineInfo;	// 16 = 0x10
}

+ (id)searchQueryBuilderWithXWebSearchURL:(id)arg1;	// IMP=0x00000001000ad0ac
+ (id)searchQueryBuilderWithQuery:(id)arg1;	// IMP=0x00000001000ad058
- (void).cxx_destruct;	// IMP=0x00000001000ad188
- (id)searchEngineInfo;	// IMP=0x00000001000ad180
- (_Bool)searchEngineIsDefault;	// IMP=0x00000001000ad118
- (id)queryString;	// IMP=0x00000001000ad110
- (id)searchURL;	// IMP=0x00000001000ad100
- (id)initWithXWebSearchURL:(id)arg1;	// IMP=0x00000001000ace78
- (id)initWithQueryString:(id)arg1;	// IMP=0x00000001000acdd0
- (id)initWithSearchEngineInfo:(id)arg1 queryString:(id)arg2;	// IMP=0x00000001000acd1c

@end
