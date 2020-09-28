/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSData, NSDictionary;

@interface PRDictionary : NSObject {

	NSURL* _url;
	NSData* _data;
	NSDictionary* _offsetsDictionary;
	NSDictionary* _numEntriesDictionary;
	NSDictionary* _dictionariesDictionary;
	PRDictionary* _fallbackDictionary;

}
-(BOOL)checkWordBuffer:(char*)arg1 length:(unsigned long long)arg2 encoding:(unsigned)arg3 index:(unsigned long long)arg4 caseInsensitive:(BOOL)arg5 ;
-(id)dictionaryAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)initWithURL:(id)arg1 fallbackURL:(id)arg2 ;
-(id)fallbackDictionary;
-(id)description;
@end
