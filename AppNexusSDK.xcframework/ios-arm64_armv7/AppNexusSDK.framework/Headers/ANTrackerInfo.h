/*   Copyright 2014 APPNEXUS INC
 
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at
 
 http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

#import <Foundation/Foundation.h>

static NSTimeInterval const kANTrackerExpirationInterval = 3600;

@interface ANTrackerInfo : NSObject

- (nullable instancetype)initWithURL:(nullable NSString *)URL;

@property (nonatomic, readonly, strong, nullable) NSString *URL;
@property (nonatomic, readonly, strong, nullable) NSDate *dateCreated;
@property (nonatomic, readonly, assign, getter=isExpired) BOOL expired;
@property (nonatomic, readwrite, assign) NSUInteger numberOfTimesFired;

@end
