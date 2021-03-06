/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:55 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSError;

@interface SDPeopleSuggestionsResult : NSObject {

	NSArray* _suggestions;
	NSError* _error;

}

@property (retain) NSArray * suggestions;              //@synthesize suggestions=_suggestions - In the implementation block
@property (retain) NSError * error;                    //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setSuggestions:(NSArray *)arg1 ;
-(NSArray *)suggestions;
@end

