class Solution {
			public:
				map<string,string> m;
				int num = 0;
				// Encodes a URL to a shortened URL.
				string encode(string longUrl) {
					string ans = "http://tinyurl.com/" + to_string(num);
					num++;
					m[ans] = longUrl;
					return ans;
				}

				// Decodes a shortened URL to its original URL.
				string decode(string shortUrl) {
					return m[shortUrl];
				}
			};
