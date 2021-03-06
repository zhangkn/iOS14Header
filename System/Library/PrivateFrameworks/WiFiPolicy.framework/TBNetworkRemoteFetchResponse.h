/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiPolicy/TBRemoteFetchResponse.h>

@class GEOWiFiQualityNetworkSearchResult;

@interface TBNetworkRemoteFetchResponse : TBRemoteFetchResponse {

	GEOWiFiQualityNetworkSearchResult* _networkSearchResult;

}

@property (nonatomic,retain) GEOWiFiQualityNetworkSearchResult * networkSearchResult;              //@synthesize networkSearchResult=_networkSearchResult - In the implementation block
+(id)responseWithNetworkSearchResults:(id)arg1 ;
-(id)initWithNetworkSearchResults:(id)arg1 ;
-(GEOWiFiQualityNetworkSearchResult *)networkSearchResult;
-(void)setNetworkSearchResult:(GEOWiFiQualityNetworkSearchResult *)arg1 ;
@end

