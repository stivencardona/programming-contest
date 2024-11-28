(import java.io.BufferedReader)
(import java.io.InputStreamReader)

(defn area
  []
  (let [reader (BufferedReader. (InputStreamReader. System/in))]
    (let [raio (Double/parseDouble (.readLine reader))]
      (* 3.14159 (Math/pow raio 2)))))

(println (format "A=%.4f" (area)))
