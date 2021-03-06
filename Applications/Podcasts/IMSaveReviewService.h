/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:23 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PodcastsTVTopShelfExtension/IMBaseStoreService.h>

@class NSData, NSURL;

@interface IMSaveReviewService : IMBaseStoreService {

	NSData* _bodyData;
	NSURL* _endpointURL;

}

@property (nonatomic,retain) NSData * bodyData;                //@synthesize bodyData=_bodyData - In the implementation block
@property (nonatomic,retain) NSURL * endpointURL;              //@synthesize endpointURL=_endpointURL - In the implementation block
-(NSData *)bodyData;
-(void)setBodyData:(NSData *)arg1 ;
-(NSURL *)endpointURL;
-(id)urlRequest;
-(void)setEndpointURL:(NSURL *)arg1 ;
-(void)performDataRequestWithCompletion:(/*^block*/id)arg1 ;
-(id)generatedEndpointURLForBaseURL:(id)arg1 ;
-(id)initWithEndpointURL:(id)arg1 bodyData:(id)arg2 ;
@end

