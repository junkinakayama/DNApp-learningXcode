//
//  DNAPI.h
//  DNApp
//
//  Created by Junki Nakayama on 9/20/14.
//  Copyright (c) 2014 Meng To. All rights reserved.
//

#import <Foundation/Foundation.h>

//referencing variables
extern NSString *const DNAPIBaseURL;
extern NSString *const DNAPIStories;
extern NSString *const DNAPIComments;
extern NSString *const DNAPILogin;

@interface NSURLRequest (DNAPI)

+ (instancetype)requestWithPattern:(NSString *)String object:(id)object;
+ (instancetype)postRequest:(NSString *)string parameters:(NSDictionary *)parameters;
+ (instancetype)deleteRequest:(NSString *)string parameters:(NSDictionary *)parameters;
+ (instancetype)requestWithMethod:(NSString *)method
                              url:(NSString *)url
                       parameters:(NSDictionary *)parameters;

@end
